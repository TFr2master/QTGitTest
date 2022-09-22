#pragma once

#include <QtWidgets/QWidget>
#include "ui_QtGitTest.h"

class QtGitTest : public QWidget
{
    Q_OBJECT

public:
    QtGitTest(QWidget *parent = Q_NULLPTR);

private:
    Ui::QtGitTestClass ui;
};
