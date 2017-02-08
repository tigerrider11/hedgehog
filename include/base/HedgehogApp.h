#ifndef HEDGEHOGAPP_H
#define HEDGEHOGAPP_H

#include "MooseApp.h"

class HedgehogApp;

template<>
InputParameters validParams<HedgehogApp>();

class HedgehogApp : public MooseApp
{
public:
  HedgehogApp(InputParameters parameters);
  virtual ~HedgehogApp();

  static void registerApps();
  static void registerObjects(Factory & factory);
  static void associateSyntax(Syntax & syntax, ActionFactory & action_factory);
};

#endif /* HEDGEHOGAPP_H */
