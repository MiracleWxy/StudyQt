/***************************************************************************
**
**  <SYSZUXpinyin 1.0 , a chinese input method based on Qt for Embedded linux>
**  Copyright (C) <2010> <Gemfield> <gemfield@civilnet.cn>
**
**  This program is free software: you can redistribute it and/or modify
**  it under the terms of the GNU General Public License version 3 as published
**  by the Free Software Foundation.
**
**  This program is distributed in the hope that it will be useful,
**  but WITHOUT ANY WARRANTY; without even the implied warranty of
**  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
**  GNU General Public License for more details.
**
**  You should have received a copy of the GNU General Public License
**  along with this program.  If not, see <http://www.gnu.org/licenses/>.
**
**  If you have questions regarding the use of this file, please contact
**  Gemfield at gemfield@civilnet.cn or post your questions at
**  http://civilnet.cn/syszux/bbs
**
****************************************************************************/

#ifndef SYSZUXIM_H
#define SYSZUXIM_H
#include <QWSInputMethod>
#include <QtGui>
class SyszuxPinyin;
class SyszuxIM:public QWSInputMethod
{
Q_OBJECT
public:
        SyszuxIM();
        ~SyszuxIM();
        void updateHandler(int);
//////////////////////////////////////////////
        QLineEdit *le;
        /*QSpinBox *sb;
        QDoubleSpinBox *dsb;
        QTextEdit *tee;
        QComboBox *cb;
        QTimeEdit *tie;
        QDateEdit *de;
        QDateTimeEdit *dte;
        QTableWidget *tw;*/
        enum WidgetType{LINEEDIT};//,SPINBOX,DOUBLESPINBOX,TEXTEDIT,COMBOBOX,TIMEEDIT,DATEEDIT,DATETIMEEDIT,TABLEWIDGET};
        WidgetType type;
//////////////////////////////////////////////
public slots:
        void confirmString(QString gemfield);
private:
        SyszuxPinyin* syszuxpinyin;
//////////////////////////////////////////////
        QWidget *current_focus_widget;
        void focusin();
//////////////////////////////////////////////
};
#endif
