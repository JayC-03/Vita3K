// Vita3K emulator project
// Copyright (C) 2018 Vita3K team
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this program; if not, write to the Free Software Foundation, Inc.,
// 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

#include <SceAudioenc/exports.h>

EXPORT(int, sceAudioencClearContext) {
    return unimplemented("sceAudioencClearContext");
}

EXPORT(int, sceAudioencCreateEncoder) {
    return unimplemented("sceAudioencCreateEncoder");
}

EXPORT(int, sceAudioencCreateEncoderExternal) {
    return unimplemented("sceAudioencCreateEncoderExternal");
}

EXPORT(int, sceAudioencDeleteEncoder) {
    return unimplemented("sceAudioencDeleteEncoder");
}

EXPORT(int, sceAudioencDeleteEncoderExternal) {
    return unimplemented("sceAudioencDeleteEncoderExternal");
}

EXPORT(int, sceAudioencEncode) {
    return unimplemented("sceAudioencEncode");
}

EXPORT(int, sceAudioencGetContextSize) {
    return unimplemented("sceAudioencGetContextSize");
}

EXPORT(int, sceAudioencGetInternalError) {
    return unimplemented("sceAudioencGetInternalError");
}

EXPORT(int, sceAudioencGetOptInfo) {
    return unimplemented("sceAudioencGetOptInfo");
}

EXPORT(int, sceAudioencInitLibrary) {
    return unimplemented("sceAudioencInitLibrary");
}

EXPORT(int, sceAudioencTermLibrary) {
    return unimplemented("sceAudioencTermLibrary");
}

BRIDGE_IMPL(sceAudioencClearContext)
BRIDGE_IMPL(sceAudioencCreateEncoder)
BRIDGE_IMPL(sceAudioencCreateEncoderExternal)
BRIDGE_IMPL(sceAudioencDeleteEncoder)
BRIDGE_IMPL(sceAudioencDeleteEncoderExternal)
BRIDGE_IMPL(sceAudioencEncode)
BRIDGE_IMPL(sceAudioencGetContextSize)
BRIDGE_IMPL(sceAudioencGetInternalError)
BRIDGE_IMPL(sceAudioencGetOptInfo)
BRIDGE_IMPL(sceAudioencInitLibrary)
BRIDGE_IMPL(sceAudioencTermLibrary)
