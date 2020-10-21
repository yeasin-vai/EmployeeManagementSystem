#ifndef TEST_H
#define TEST_H

#include <QMainWindow>
#include "Queue.h"
#include <QLabel>
namespace Ui {
class test;
}

class test : public QMainWindow
{
    Q_OBJECT

public:
    explicit test(QWidget *parent = nullptr);
    ~test();

private slots:
    void on_searchButton_clicked();

    void on_showPerButton_clicked();

    void on_approveLeaveButton_2_clicked();

    void on_generateRepButton_clicked();

    void on_exit_clicked();

    void on_pushButton_3_clicked();

    void on_btnSHowPerformance_clicked();

    void on_approveLeaveButton_clicked();

    void on_generateReportButton_clicked();

    void on_ExitButton_clicked();

    void on_dashButton_clicked();

    void on_retireButton_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_39_clicked();

    void on_pushButton_40_clicked();

    void on_pushButton_41_clicked();

    void on_pushButton_42_clicked();

    void intializeDashboardValue();

    void on_pushButton_8_clicked();

    void on_pushButton_16_clicked();

    void increaseSalary(QLabel *val);

    void on_makePromotion_clicked();

    void givePromortion(QLabel *val);

    void on_pushButton_17_clicked();

    void on_pushButton_18_clicked();

    void on_pushButton_23_clicked();

    void on_pushButton_31_clicked();

    void on_pushButton_25_clicked();

    void on_pushButton_33_clicked();

    void on_pushButton_19_clicked();

    void on_pushButton_27_clicked();

    void on_pushButton_35_clicked();

    void on_pushButton_21_clicked();

    void on_pushButton_29_clicked();

    void on_pushButton_37_clicked();

    void on_pushButton_24_clicked();

    void on_pushButton_32_clicked();

    void on_pushButton_26_clicked();

    void on_pushButton_34_clicked();

    void on_pushButton_20_clicked();

    void on_pushButton_28_clicked();

    void on_pushButton_36_clicked();

    void on_pushButton_22_clicked();

    void on_pushButton_30_clicked();

    void on_pushButton_38_clicked();

    void approveLeave(QLabel *val);

    void RecordMC(QLabel *val);

    void on_pushButton_46_clicked();

    void on_pushButton_50_clicked();

    void on_pushButton_54_clicked();

    void on_pushButton_48_clicked();

    void on_pushButton_52_clicked();

    void on_pushButton_56_clicked();

    void on_pushButton_47_clicked();

    void on_pushButton_51_clicked();

    void on_pushButton_55_clicked();

    void on_pushButton_49_clicked();

    void on_pushButton_53_clicked();

    void on_pushButton_57_clicked();

    void generateReport();

    void searchEmployee();

    void giveRetirement();

private:
    Ui::test *ui;
    Queue q = *new Queue();
};

#endif // TEST_H
