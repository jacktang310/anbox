/*
 * Copyright (C) 2016 Simon Fels <morphis@gravedo.de>
 *
 * This program is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 3, as published
 * by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranties of
 * MERCHANTABILITY, SATISFACTORY QUALITY, or FITNESS FOR A PARTICULAR
 * PURPOSE.  See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef ANBOX_UBUNTU_KEYCODE_CONVERTER_H_
#define ANBOX_UBUNTU_KEYCODE_CONVERTER_H_

#include <SDL_scancode.h>

#include <cstdint>

#include <array>

namespace anbox {
namespace ubuntu {
class KeycodeConverter {
 public:
  static std::uint16_t convert(const SDL_Scancode &scan_code);

 private:
  static const std::array<SDL_Scancode, 249> code_map;
};
}  // namespace ubuntu
}  // namespace anbox

#endif
