#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtSql>
#include <QMessageBox>
#include <QCoreApplication>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlTableModel>
#include <QTableView>
#include <QDebug>
#include <QInputDialog>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_db = QSqlDatabase::addDatabase("QSQLITE");
    m_db.setDatabaseName("mydbdbdb.sqlite");

    if (!m_db.open()) {
        QMessageBox::critical(this, "Ошибка", "Не удалось открыть базу данных.");
        QCoreApplication::exit();
    }

    QSqlQuery query;
    query.exec("CREATE TABLE IF NOT EXISTS students ("
               "Id INTEGER PRIMARY KEY AUTOINCREMENT, "
               "name TEXT, "
               "university_name TEXT, "
               "course INTEGER, "
               "faculty TEXT)");
        query.clear();
        query.exec("INSERT INTO Students (ID, name, university_name, course, faculty) VALUES "
                        "('1', 'Ivanov', 'Bonch', 2, 'Engineering'), "
                        "('2', 'Petrov', 'Itmo', 3, 'Science'), "
                        "('3', 'Sidorov', 'Bonch', 1, 'Arts'), "
                        "('4', 'Kuznetsov', 'Leti', 4, 'Business'), "
                        "('5', 'Smirnov', 'Itmo', 2, 'Engineering');");
        query.clear();


        model = new QSqlTableModel(this, m_db);
        model->setTable("Students");
        model->select();
        model->setEditStrategy(QSqlTableModel::OnFieldChange);
        ui->tableView->setModel(model);
        connect(ui->filterDataButten2, &QPushButton::clicked, this, &MainWindow::on_filterDataButton_clicked);
        connect(ui->allDataViewButton, &QPushButton::clicked, this, &MainWindow::on_allDataViewButton_clicked);
        connect(ui->filterDataButton, &QPushButton::clicked, this, &MainWindow::on_filterDataButten2_clicked);
        connect(ui->sort_Button, &QPushButton::clicked, this, &MainWindow::on_sort_Button_clicked);

}

MainWindow::~MainWindow()
{
    delete ui;
    delete query;
    delete model;
}



void MainWindow::on_allDataViewButton_clicked()
{
    model->setSort(-1, Qt::AscendingOrder);

    model->setFilter("");

    if (model->select()) {

        ui->tableView->setModel(model);
    } else {
        qDebug() << "Ошибка выбора данных: " << model->lastError().text();
        QMessageBox::critical(this, "Ошибка", "Не удалось получить данные из базы данных.");
    }
}




void MainWindow::on_filterDataButton_clicked()
{
    model->setFilter("course = 2");
    model->select();
    ui->tableView->setModel(model);
}


void MainWindow::on_filterDataButten2_clicked()
{
    model->setFilter("course > 2");
    model->select();
    ui->tableView->setModel(model);
}


void MainWindow::on_pushButton_Add_clicked()
{
    QString name = ui->lineEdit_Name->text();
    QString universityName = ui->lineEdit_Uni->text();
    int course = ui->spinBox_course->value();
    QString faculty = ui->lineEdit_faculty->text();

    QSqlQuery query;
    query.prepare("INSERT INTO students (name, university_name, course, faculty) "
                  "VALUES (:name, :university, :course, :faculty)");
    query.bindValue(":name", name);
    query.bindValue(":university", universityName);
    query.bindValue(":course", course);
    query.bindValue(":faculty", faculty);

    if (query.exec()) {
        model->select();
        ui->lineEdit_Name->clear();
        ui->lineEdit_Uni->clear();
        ui->spinBox_course->setValue(1);
        ui->lineEdit_faculty->clear();
    } else {
        qDebug() << "Query error: " << query.lastError().text();
        QMessageBox::critical(this, "Ошибка", "Не удалось добавить запись.");
    }
}


void MainWindow::on_pushButton_Rem_clicked()
{
    bool ok;
    int studentId = QInputDialog::getInt(this, "Удаление записи", "Введите ID студента для удаления:", 0, 0, INT_MAX, 1, &ok);

    if (ok) {
        QSqlQuery query;
        query.prepare("DELETE FROM students WHERE Id = :id");
        query.bindValue(":id", studentId);

        if (query.exec()) {
            model->select();
        } else {
            QMessageBox::critical(this, "Ошибка", "Не удалось удалить запись.");
        }
    }
}


void MainWindow::on_sort_Button_clicked()
{
    model->setSort(1, Qt::AscendingOrder);

    model->select();
    ui->tableView->setModel(model);

}

