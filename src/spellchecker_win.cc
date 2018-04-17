#include <windows.h>
#include <guiddef.h>
#include <initguid.h>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <spellcheck.h>

#include "spellchecker.h"
#include "spellchecker_win.h"
#include "spellchecker_hunspell.h"

namespace spellchecker {

SpellcheckerImplementation* SpellcheckerFactory::CreateSpellchecker() {
  return new HunspellSpellchecker();
}

}  // namespace spellchecker
