// Copyright (C) 2012-2016 The VPaint Developers.
// See the COPYRIGHT file at the top-level directory of this distribution
// and at https://github.com/dalboris/vpaint/blob/master/COPYRIGHT
//
// This file is part of VPaint, a vector graphics editor. It is subject to the
// license terms and conditions in the LICENSE.MIT file found in the top-level
// directory of this distribution and at http://opensource.org/licenses/MIT

#include <QCoreApplication>
#include "Test.h"

#include <TestCell.h>
#include <TestCellData.h>

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);
    app.setAttribute(Qt::AA_Use96Dpi, true);
    QTEST_SET_MAIN_SOURCE_PATH

    TestCell * test1 = new TestCell();
    TestCellData * test2 = new TestCellData();

#define QT_NO_DEBUG_OUTPUT
#define QT_NO_WARNING_OUTPUT

    bool fail = false;
    fail = fail || QTest::qExec(test1, argc, argv);
    fail = fail || QTest::qExec(test2, argc, argv);
    return fail;

            /*
    bool fail = false;
    foreach(QObject * test, testList())
    {
        fail = fail || QTest::qExec(test, argc, argv);
    }
            */



}
