
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2017 Matthias Koefferlein

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


#include "tlHttpStream.h"
#include "utHead.h"

std::string test_url1 ("http://www.klayout.org/svn-public/klayout-resources/trunk/testdata/text");

TEST(1)
{
  tl::InputHttpStream stream (test_url1);

  char b[100];
  size_t n = stream.read (b, sizeof (b));
  std::string res (b, n);
  EXPECT_EQ (res, "hello, world.\n");
}

