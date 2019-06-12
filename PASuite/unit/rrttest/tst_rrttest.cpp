/**********************************************************************************
 * Copyright (c) 
 *
 * This file is part of passuite.
 *
 * passuite is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License version 1.0 as published by the Free Software Foundation.
 *
 * passuite is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with passuite; if not, write to the Free Software
 * Foundation, Inc., xxx Street, xxx Floor, xxx place, postal code xxx  country xxxx
 **********************************************************************************/


#include <QCoreApplication>
#include <QStringList>

#include <iostream>
#include <stdio.h>

int main(int argc, char *argv[])
{
  QCoreApplication app(argc, argv);
  Q_UNUSED(app);


  QStringList args = app.arguments();
  if (args.count() == 2)
    {
          std::cout << "This is a test demo" << std::endl;
          return 1;
    }

  return 0;
}
