#include "fellow/api/Services.h"
#include "fellow/service/HUD.h"
#include "fellow/service/FSWrapper.h"
#include "fellow/service/RetroPlatformWrapper.h"

using namespace fellow::service;
using namespace fellow::api::service;

namespace fellow::api
{
  HUD hud;
  FSWrapper fsWrapper;
  RetroPlatformWrapper retroPlatformWrapper;

  Services* Service = new Services(hud, fsWrapper, retroPlatformWrapper);
}
