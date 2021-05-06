import sys
from PyQt5.QtWidgets import QDialog, QApplication
from HideTextApp import *

class MyForm(QDialog):
    def __init__(self):
        super().__init__()
        self.ui = Ui_Dialog()
        self.ui.setupUi(self)
        self.ui.pushButton.clicked.connect(self.Hidemessage)

    def Hidemessage(self):
        self.ui.labelDisplay.setVisible(False)

if __name__=="__main__":
    app = QApplication(sys.argv)
    w = MyForm()
    w.show()
    sys.exit(app.exec_())
