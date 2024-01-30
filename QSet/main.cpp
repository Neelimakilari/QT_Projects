#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QSet<QString> people;
    people << "Neelima" << "santhu" << "Dhanu" << "Ahaan";
    people.insert("Bannu");

    //Notice this is out of order - and no duplicates
    foreach(QString person, people) {
        qInfo() << person;
    }

    //Very very fast
    qInfo() << "Neelima in collection?" << people.contains("Neelima");

    return a.exec();
}
