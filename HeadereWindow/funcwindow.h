#ifndef FUNCWINDOW_H
#define FUNCWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class FuncWindow; }
QT_END_NAMESPACE

class FuncWindow : public QMainWindow
{
    Q_OBJECT

public:
    FuncWindow(QWidget *parent = nullptr);
    ~FuncWindow();

private slots:

    void on_FilterButton_clicked();

    void on_SortButton_clicked();

    void on_SearchButton_clicked();

    void on_ExportButton_clicked();

    void on_RenderButton_clicked();

    void on_GoToCatsButton_clicked();

    void on_pushButton_7_clicked();
private:
    Ui::FuncWindow *ui;
};
#endif // FUNCWINDOW_H
