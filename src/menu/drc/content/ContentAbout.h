/****************************************************************************
 * Copyright (C) 2016,2017 Maschell
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 ****************************************************************************/
#ifndef _CONTENT_ABOUT_H
#define _CONTENT_ABOUT_H

#include <vector>
#include "gui/Gui.h"
#include "ContentHome.h"
#include "ContentTemplate.h"
#include "language/gettext.h"

class ContentAbout : public ContentTemplate{
public:
    ContentAbout();
    virtual ~ContentAbout();

private:
    GuiText headLine;
    std::vector<GuiText *> aboutText;
};

#endif //_CONTENT_ABOUT_H
