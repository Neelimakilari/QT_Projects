#include <QCoreApplication>
#include <QMap>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QMap<QString,int> ages;
    ages.insert("Neelima", 29);
    ages.insert("Santhu", 32);
    ages.insert("Dhanu", 03);

    qInfo() << "Keys:" << ages.keys();
    qInfo() << "Values:" << ages.values();
    qInfo() << "Neelima is:" << ages["Neelima"] << "years old";

    ages.remove("Dhanu");
    qInfo() << "Contains" << ages.contains("Dhanu");

    foreach(QString key, ages.keys())
    {
        qInfo() << key << " = " << ages[key];
    }

    qInfo() << "Test" << ages.value("Test",-1);

    ages["Neelima"] = 99;
    qInfo() << "Bryan" << ages.value("Neelima",-1);

    ages["Santhu"] = 222;
    qInfo() << "Test" << ages.value("Santhu",-1);

    return a.exec();
}
