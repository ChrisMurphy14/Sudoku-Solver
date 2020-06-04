////////////////////////////////////////
// Author:              Chris Murphy
// Date created:        04.06.20
// Date last edited:    04.06.20
////////////////////////////////////////
#include "sudokusolver.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication application(argc, argv); // The application that handles widget-specific initialization and finalization.
    SudokuSolver window; // The widget used as the main window to handle and display the sudoku-solving program.
    window.show(); // Shows the widget and all children widgets.
    return application.exec(); // Enters the main event loop to enable event handling and waits until exit() is called.
}
