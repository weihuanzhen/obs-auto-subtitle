/*
obs-auto-subtitle
 Copyright (C) 2019-2020 Yibai Zhang

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; If not, see <https://www.gnu.org/licenses/>
*/

#ifndef OBS_AUTOSUB_SPEECH_BUILDER_BASE_H
#define OBS_AUTOSUB_SPEECH_BUILDER_BASE_H

#include "PropBuilderBase.h"
#include "../vendor/ASR/ASRBase.h"

class SpeechBuilderBase: public PropBuilderBase<ASRBase> { };

#if defined _PROP
#undef _PROP
#endif

#define _PROP(name) "autosub_filter_asr_" # name

#endif