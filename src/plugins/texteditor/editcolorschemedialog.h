/**************************************************************************
**
** This file is part of Qt Creator
**
** Copyright (c) 2009 Nokia Corporation and/or its subsidiary(-ies).
**
** Contact: Nokia Corporation (qt-info@nokia.com)
**
** Commercial Usage
**
** Licensees holding valid Qt Commercial licenses may use this file in
** accordance with the Qt Commercial License Agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Nokia.
**
** GNU Lesser General Public License Usage
**
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** If you are unsure which license is appropriate for your use, please
** contact the sales department at http://www.qtsoftware.com/contact.
**
**************************************************************************/

#ifndef EDITCOLORSCHEMEDIALOG_H
#define EDITCOLORSCHEMEDIALOG_H

#include "colorscheme.h"
#include "fontsettingspage.h"

#include <QtGui/QDialog>

namespace TextEditor {
namespace Internal {

namespace Ui {
class EditColorSchemeDialog;
}

class EditColorSchemeDialog : public QDialog
{
    Q_OBJECT

public:
    EditColorSchemeDialog(const FormatDescriptions &fd,
                          const FontSettings &fontSettings,
                          const ColorScheme &scheme,
                          QWidget *parent = 0);
    ~EditColorSchemeDialog();

    ColorScheme colorScheme() const
    { return m_scheme; }

private slots:
    void itemChanged();
    void changeForeColor();
    void changeBackColor();
    void eraseBackColor();
    void checkCheckBoxes();
    void updatePreview();

private:
    const TextEditor::FormatDescriptions m_descriptions;
    const FontSettings m_fontSettings;

    ColorScheme m_scheme;
    int m_curItem;

    Ui::EditColorSchemeDialog *m_ui;
};


} // namespace Internal
} // namespace TextEditor

#endif // EDITCOLORSCHEMEDIALOG_H
