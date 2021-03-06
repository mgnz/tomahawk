/* === This file is part of Tomahawk Player - <http://tomahawk-player.org> ===
 *
 *   Copyright 2011, Leo Franchi <lfranchi@kde.org>
 *
 *   Tomahawk is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   Tomahawk is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with Tomahawk. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef GETNEWSTUFFDIALOG_H
#define GETNEWSTUFFDIALOG_H

#include <QDialog>

class GetNewStuffModel;
namespace Ui {
    class GetNewStuffDialog;
}

class GetNewStuffDialog : public QDialog
{
    Q_OBJECT
public:
    explicit GetNewStuffDialog( QWidget *parent = 0, Qt::WindowFlags f = 0 );
    ~GetNewStuffDialog();

private:
    Ui::GetNewStuffDialog *ui;
    GetNewStuffModel* m_model;
};

#endif // GETNEWSTUFFDIALOG_H
