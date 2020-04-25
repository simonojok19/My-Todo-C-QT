#ifndef TASK_H
#define TASK_H

#include <QWidget>

namespace Ui {
class Task;
}

class Task : public QWidget {
    Q_OBJECT

    public:
        explicit Task(const QString& name, QWidget *parent = 0);
        ~Task();
        void setName(const QString& name);
        QString name() const;
        bool isCompleted() const;
    ;;
    private:
        Ui::Task *ui;
public slots:
        void rename();
signals:
        void removed(Task* task);
        void statusChanged(Task* task);

private slots:
        void checked(bool checked);
};
#endif // TASK_H
