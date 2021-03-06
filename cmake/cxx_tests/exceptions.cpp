// DESCRIPTION
//
//   Test to check whether the C++ compiler supports exceptions handling (try, throw and catch),
//   In sync with AC_CXX_EXCEPTIONS (2008-04-12).
//
// Copyright (c) 2009 Theo Papadopoulo <Theodore.Papadopoulo@sophia.inria.fr>
//
// ORIGINAL COPYLEFT
//
//   Copyright (c) 2008 Todd Veldhuizen
//   Copyright (c) 2008 Luc Maisonobe <luc@spaceroots.org>
//
//   Copying and distribution of this file, with or without modification, are
//   permitted in any medium without royalty provided the copyright notice
//   and this notice are preserved.

int main() {
    try { throw  1; } catch (int i) { return i; }
}
