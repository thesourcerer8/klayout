
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2024 Matthias Koefferlein

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/

#if defined(HAVE_QT)

#ifndef HDR_layBookmarkManagementForm
#define HDR_layBookmarkManagementForm

#include <QDialog>

#include "layuiCommon.h"
#include "layLayoutViewBase.h"

#include <set>

namespace Ui
{
  class BookmarkManagementForm;
}

namespace lay
{

class LAYUI_PUBLIC BookmarkManagementForm
  : public QDialog
{
  Q_OBJECT 

public:
  BookmarkManagementForm (QWidget *parent, const char *name, const lay::BookmarkList &bookmarks, const std::set<size_t> &selected);

  /**
   *  @brief Obtain the bookmark list
   */
  const lay::BookmarkList &bookmarks ()
  {
    return m_bookmarks;
  }

  virtual void accept ();

public slots:
  void delete_pressed ();

private:
  Ui::BookmarkManagementForm *mp_ui;
  lay::BookmarkList m_bookmarks;
};

}

#endif

#endif  //  defined(HAVE_QT)
