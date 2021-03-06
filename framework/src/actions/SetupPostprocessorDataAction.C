/****************************************************************/
/*               DO NOT MODIFY THIS HEADER                      */
/* MOOSE - Multiphysics Object Oriented Simulation Environment  */
/*                                                              */
/*           (c) 2010 Battelle Energy Alliance, LLC             */
/*                   ALL RIGHTS RESERVED                        */
/*                                                              */
/*          Prepared by Battelle Energy Alliance, LLC           */
/*            Under Contract No. DE-AC07-05ID14517              */
/*            With the U. S. Department of Energy               */
/*                                                              */
/*            See COPYRIGHT for full restrictions               */
/****************************************************************/

// MOOSE includes
#include "SetupPostprocessorDataAction.h"
#include "FEProblem.h"

template<>
InputParameters validParams<SetupPostprocessorDataAction>()
{
  InputParameters params = validParams<Action>();
  return params;
}

SetupPostprocessorDataAction::SetupPostprocessorDataAction(InputParameters params) :
  Action(params)
{
}

void
SetupPostprocessorDataAction::act()
{
  _problem->initPostprocessorData(_name);
}
