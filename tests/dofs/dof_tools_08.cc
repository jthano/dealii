// ---------------------------------------------------------------------
//
// Copyright (C) 2003 - 2018 by the deal.II authors
//
// This file is part of the deal.II library.
//
// The deal.II library is free software; you can use it, redistribute
// it, and/or modify it under the terms of the GNU Lesser General
// Public License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
// The full text of the license can be found in the file LICENSE.md at
// the top level directory of deal.II.
//
// ---------------------------------------------------------------------


#include "../tests.h"
#include "dof_tools_common.h"
#include "dof_tools_common_fake_hp.h"

// check
//   DoFTools::map_dof_to_boundary_indices(const DoFHandler<int>     &,
//                                         std::vector<unsigned int> &)



template <typename DoFHandlerType>
void
check_this(const DoFHandlerType &dof_handler)
{
  std::vector<types::global_dof_index> map(dof_handler.n_dofs());
  DoFTools::map_dof_to_boundary_indices(dof_handler, map);
  for (unsigned int i = 0; i < map.size(); ++i)
    deallog << (int)map[i] << " ";
  deallog << std::endl;
}
