/*PGR-GNU*****************************************************************

Copyright (c) 2014 Manikata Kondeti
mani.iiit123@gmail.com

------

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

********************************************************************PGR-GNU*/
#pragma once

#include "./../../common/src/pgr_types.h"

#ifdef __cplusplus
extern "C"
#endif


int Solver(Customer *customers,
        size_t total_tuples,
        int64_t vehicle_count,
        double capacity ,
        char **msg,
        path_element **results,
        size_t *length_results);

#ifdef __cplusplus
extern "C"
#endif

