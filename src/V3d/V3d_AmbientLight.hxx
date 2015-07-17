// Created on: 1992-01-21
// Created by: GG
// Copyright (c) 1992-1999 Matra Datavision
// Copyright (c) 1999-2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

#ifndef _V3d_AmbientLight_HeaderFile
#define _V3d_AmbientLight_HeaderFile

#include <Standard.hxx>
#include <Standard_Type.hxx>

#include <V3d_Light.hxx>
#include <Quantity_NameOfColor.hxx>
class V3d_Viewer;


class V3d_AmbientLight;
DEFINE_STANDARD_HANDLE(V3d_AmbientLight, V3d_Light)

//! Creation of an ambient light source in a viewer.
class V3d_AmbientLight : public V3d_Light
{

public:

  
  //! Constructs an ambient light source in the viewer VM.
  //! The default Color of this light source is WHITE.
  Standard_EXPORT V3d_AmbientLight(const Handle(V3d_Viewer)& VM, const Quantity_NameOfColor Color = Quantity_NOC_WHITE);




  DEFINE_STANDARD_RTTI(V3d_AmbientLight,V3d_Light)

protected:




private:




};







#endif // _V3d_AmbientLight_HeaderFile