/* Copyright (c) 2013-2016  Jonathan Klee

This file is part of ngp.

ngp is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

ngp is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with ngp.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef FILE_H
#define FILE_H

#include "entry.h"

struct file_t {
    struct entry_t entry;
};

struct entry_t *create_file(struct search_t *search, char *file);
void display_file(struct entry_t *entry, struct search_t *search, int y);
void display_file_with_cursor(struct entry_t *entry, struct search_t *search, int y);
void free_file(struct entry_t *entry);
bool is_file_selectionable(struct entry_t *entry);

#endif
