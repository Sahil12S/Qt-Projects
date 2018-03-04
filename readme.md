*************************
Author: SAHIL SHARMA
Created On: Feb 28, 2018
*************************

I am using Qt to make some basic applications in C++.

Application 1: Hello World
  The first application that says Hello in a separate window.

Application 2: FirstProject
	A test to display a message in window on button click and close the window on another button click.

Application 3: SignalsAndSlot
	There are 2 ways to make connection between Progress Bar and Slider:
	1. Using GUI: Edit Signals and Slots -> Select Slider and connect it with Progress Bar -> valueChanged(int) -> setValue(int) -> Run.
	2. Using command line: Edit window -> mainwindow.cpp -> Use function "connect(ui->horizontalSlider, SIGNAL(valueChanged(int)), pi->progressBar, SLOT(setValue(int)));" -> Run.







*********
Problems
*********
1. Can't find kits.
  Go to Options -> Build & Run -> Qt Version -> check if the file selected is correct, if not select qmake file from /usr/bin/qmake-qt5 (for linux)
  After this, go to Kits -> Qt Version -> see if correct version is selected. 
