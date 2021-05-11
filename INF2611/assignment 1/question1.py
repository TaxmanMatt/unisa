# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'question1.ui'
#
# Created by: PyQt5 UI code generator 5.6
#
# WARNING! All changes made in this file will be lost!

from PyQt5 import QtCore, QtGui, QtWidgets
from PyQt5.QtWidgets import (QApplication, QWidget, QPushButton, 
QLineEdit, QInputDialog)

class Ui_Dialog(object):
    def setupUi(self, Dialog):
        Dialog.setObjectName("Dialog")
        Dialog.resize(810, 600)
        self.tabWidget = QtWidgets.QTabWidget(Dialog)
        self.tabWidget.setEnabled(True)
        self.tabWidget.setGeometry(QtCore.QRect(30, 130, 751, 461))
        self.tabWidget.setObjectName("tabWidget")
        self.tab = QtWidgets.QWidget()
        self.tab.setObjectName("tab")
        self.label_3 = QtWidgets.QLabel(self.tab)
        self.label_3.setGeometry(QtCore.QRect(-10, -80, 771, 531))
        self.label_3.setText("")
        self.label_3.setPixmap(QtGui.QPixmap("image.jpg"))
        self.label_3.setScaledContents(True)
        self.label_3.setObjectName("label_3")
        self.layoutWidget = QtWidgets.QWidget(self.tab)
        self.layoutWidget.setGeometry(QtCore.QRect(290, 360, 158, 25))
        self.layoutWidget.setObjectName("layoutWidget")
        self.horizontalLayout = QtWidgets.QHBoxLayout(self.layoutWidget)
        self.horizontalLayout.setContentsMargins(0, 0, 0, 0)
        self.horizontalLayout.setObjectName("horizontalLayout")
        self.previousButton = QtWidgets.QPushButton(self.layoutWidget)
        self.previousButton.setObjectName("previousButton")
        self.horizontalLayout.addWidget(self.previousButton)
        self.nextButton = QtWidgets.QPushButton(self.layoutWidget)
        self.nextButton.setObjectName("nextButton")
        self.horizontalLayout.addWidget(self.nextButton)
        self.tabWidget.addTab(self.tab, "")
        self.tab_4 = QtWidgets.QWidget()
        self.tab_4.setObjectName("tab_4")
        self.listWidget_2 = QtWidgets.QListWidget(self.tab_4)
        self.listWidget_2.setGeometry(QtCore.QRect(10, 30, 721, 371))
        self.listWidget_2.setObjectName("listWidget_2")
        item = QtWidgets.QListWidgetItem()
        self.listWidget_2.addItem(item)
        self.tabWidget.addTab(self.tab_4, "")
        self.tab_3 = QtWidgets.QWidget()
        self.tab_3.setObjectName("tab_3")
        self.listWidget = QtWidgets.QListWidget(self.tab_3)
        self.listWidget.setGeometry(QtCore.QRect(10, 20, 725, 391))
        font = QtGui.QFont()
        font.setPointSize(8)
        self.listWidget.setFont(font)
        self.listWidget.setObjectName("listWidget")
        item = QtWidgets.QListWidgetItem()
        self.listWidget.addItem(item)
        self.tabWidget.addTab(self.tab_3, "")
        self.label = QtWidgets.QLabel(Dialog)
        self.label.setGeometry(QtCore.QRect(50, 10, 371, 111))
        font = QtGui.QFont()
        font.setFamily("Fira Code")
        font.setPointSize(48)
        font.setBold(False)
        font.setWeight(50)
        self.label.setFont(font)
        self.label.setObjectName("label")
        self.compButton = QtWidgets.QPushButton(Dialog)
        self.compButton.setGeometry(QtCore.QRect(540, 100, 191, 23))
        self.compButton.setObjectName("compButton")
        self.label_2 = QtWidgets.QLabel(Dialog)
        self.label_2.setGeometry(QtCore.QRect(505, 25, 261, 61))
        self.label_2.setFrameShape(QtWidgets.QFrame.NoFrame)
        self.label_2.setAlignment(QtCore.Qt.AlignCenter)
        self.label_2.setWordWrap(True)
        self.label_2.setIndent(5)
        self.label_2.setObjectName("label_2")

        self.retranslateUi(Dialog)
        self.tabWidget.setCurrentIndex(0)
        QtCore.QMetaObject.connectSlotsByName(Dialog)

        self.previousButton.clicked.connect(self.showPrevious)
        self.nextButton.clicked.connect(self.showNext)

    def retranslateUi(self, Dialog):
        _translate = QtCore.QCoreApplication.translate
        Dialog.setWindowTitle(_translate("Dialog", "Dialog"))
        self.previousButton.setText(_translate("Dialog", "Previous"))
        self.nextButton.setText(_translate("Dialog", "Next"))
        self.tabWidget.setTabText(self.tabWidget.indexOf(self.tab), _translate("Dialog", "Home"))
        __sortingEnabled = self.listWidget_2.isSortingEnabled()
        self.listWidget_2.setSortingEnabled(False)
        item = self.listWidget_2.item(0)
        item.setText(_translate("Dialog", "THE REUNION BY GEORGINA GRATRIX\n"
"April 13 @ 8:00 am - May 31 @ 5:00 pm\n"
"Norval Foundation, 4 Steenberg Rd, Steenberg Estate\n"
"Cape Town, Western Cape 7945 South Africa\n"
"Price: ZAR120\n"
"\n"
"DRIVE-IN CINEMA AT BOSCHENDAL\n"
"April 13 @ 6:00 pm - May 29 @ 10:30 pm\n"
"Boschendal Wine Estate, R310 Pniel Road Groot Drakenstein\n"
"Franschhoek, Western Cape 7680 South Africa\n"
"Price: ZAR250\n"
"\n"
"WINTER OF WANDER AT DURBANVILLE HILLS\n"
"May 6 @ 7:00 pm - August 12 @ 7:00 pm\n"
"Durbanville Hills Winery, Tygerberg Valley Rd, Cape Farms\n"
"Cape Town, Western Cape 7550 South Africa + Google Map\n"
"Price: ZAR350\n"
"\n"
"THE ALPHEN ANTIQUES AND COLLECTABLES MARKETS\n"
"May 16 @ 10:00 am - 3:00 pm\n"
"Recurring Event (See all)\n"
"The Garrat Memorial Hall, 5 Eskol Lane, Constantia\n"
"Cape Town, Western Cape 7806 South Africa + Google Map\n"
"Price: Free"))
        self.listWidget_2.setSortingEnabled(__sortingEnabled)
        self.tabWidget.setTabText(self.tabWidget.indexOf(self.tab_4), _translate("Dialog", "Events"))
        __sortingEnabled = self.listWidget.isSortingEnabled()
        self.listWidget.setSortingEnabled(False)
        item = self.listWidget.item(0)
        item.setText(_translate("Dialog", "THE TEST KITCHEN\n"
"Opening times Tuesday – Saturday, 6pm – 8pm\n"
"Contact 021 447 2337, reservations@thetestkitchen.co.za\n"
"Where to find it The Old Biscuit Mill, 375 Albert Road, Woodstock, Cape Town\n"
"\n"
"CHEFS WAREHOUSE\n"
"Opening times Monday – Saturday, 12pm – 2:30pm; 5.30pm – 8.30pm; Sunday, 12pm – 2.30pm\n"
"Contact 021 794 8632, info@chefswarehouse.co.za\n"
"Where to find it Beau Constantia, 1043 Constantia Main Road, Cape Town\n"
"\n"
"SALSIFY\n"
"Opening times Tuesday – Saturday; 12.30pm – 2pm; 6.30pm – 9pm\n"
"Contact 021 010 6444, reservations@salsify.co.za\n"
"Where to find it Roundhouse Road, Camps Bay\n"
"\n"
"THE FOODBARN RESTAURANT\n"
"Opening times Daily, 12pm – 2.30pm; Tuesday – Saturday, 7pm – 9.30pm\n"
"Contact 021 789 1390, info@thefoodbarn.co.za\n"
"Where to find it Noordhoek Farm Village, Corner Village Lane and Noordhoek Main Road, Noordhoek\n"
"\n"
"KYOTO GARDEN JAPANESE RESTAURANT\n"
"Opening times Monday – Saturday, 5.30pm – 11pm\n"
"Contact 021 422 2001, kyotogardensushict.com\n"
"Where to find it 11 Lower Kloof Nek Road, Gardens, Cape Town\n"
"\n"
"THE POTLUCK CLUB\n"
"Opening times Monday – Saturday, 12.30 – 2pm; 6pm – 10pm; Sunday, 11am – 12.30pm\n"
"Contact 021 447 0804, reservations@thepotluckclub.co.za\n"
"Where to find it Silo Top Floor, The Old Biscuit Mill, 373 – 375 Albert Road, Woodstock, Cape Town\n"
""))
        self.listWidget.setSortingEnabled(__sortingEnabled)
        self.tabWidget.setTabText(self.tabWidget.indexOf(self.tab_3), _translate("Dialog", "Eat Out"))
        self.label.setText(_translate("Dialog", "Cape Town"))
        self.compButton.setText(_translate("Dialog", "Click to add email and enter."))
        self.label_2.setText(_translate("Dialog", "Enter your email below and stand a chance to win an all expenses paid for you and a partner to Cape Town for five days!"))

    def showPrevious(self):
        self.label_3.setPixmap(QtGui.QPixmap("image.jpg"))
    def showNext(self):
        self.label_3.setPixmap(QtGui.QPixmap("stjames.jpg"))



if __name__ == "__main__":
    import sys
    app = QtWidgets.QApplication(sys.argv)
    Dialog = QtWidgets.QDialog()
    ui = Ui_Dialog()
    ui.setupUi(Dialog)
    Dialog.show()
    sys.exit(app.exec_())

