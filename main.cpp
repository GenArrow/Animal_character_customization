#include "HeadereWindow/mainwindow.h"
#include "Tests/TestRepo+Func.h"

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);

    RepositoryFile<Pisica> repoCatsTest("test_repo_func.csv");
    Pisica::repo = repoCatsTest;
    string nameTestFile = "test_repo_func.csv";
    UndoRedo::clearfile(nameTestFile);
    tests();

    UndoRedo::fileinit();

    RepositoryFile<Pisica> repoCats("pisici.csv");
    Pisica::repo = repoCats;

    RepositoryFile<Caine> repoDogs("caini.csv");
    Caine::repo = repoDogs;

    MainWindow mw;
    mw.show();
    mw.setFixedSize(size(mw));
    mw.print_entitati_to_list();

    return QApplication::exec();
    //return 0;

}