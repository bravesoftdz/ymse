/*
	VeroRoute - Qt based Veroboard/Perfboard/PCB layout & routing application.

	Copyright (C) 2017  Alex Lawrow    ( dralx@users.sourceforge.net )

	This program is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include <QDialog>

class MainWindow;
class Ui_ControlDialog;

class ControlDialog : public QWidget
{
	Q_OBJECT

public:
	explicit ControlDialog(QWidget* parent);
	~ControlDialog();

	void SetMainWindow(MainWindow* p);
	void ClearLists();
	void AddListItem(const std::string& str, bool bBroken, bool bFloating);
	void SetListItems(const int nodeId);

	void UpdateCompControls();	// Component controls
	void UpdateControls();		// Non-component controls
protected:
	void paintEvent(QPaintEvent* event);
	void keyPressEvent(QKeyEvent* event);
	void keyReleaseEvent(QKeyEvent* event);
private:
	Ui_ControlDialog*	ui;
	MainWindow*			m_pMainWindow;
};
