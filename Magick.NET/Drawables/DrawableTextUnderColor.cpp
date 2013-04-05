//=================================================================================================
// Copyright 2013 Dirk Lemstra <http://magick.codeplex.com/>
//
// Licensed under the ImageMagick License (the "License"); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
//
//   http://www.imagemagick.org/script/license.php
//
// Unless required by applicable law or agreed to in writing, software distributed under the
// License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
// express or implied. See the License for the specific language governing permissions and
// limitations under the License.
//=================================================================================================
#include "stdafx.h"
#include "DrawableTextUnderColor.h"

namespace ImageMagick
{
	//==============================================================================================
	void DrawableTextUnderColor::Initialize(MagickColor^ color)
	{
		Magick::Color* magickColor = color->CreateColor();
		Value = new Magick::DrawableTextUnderColor(*magickColor);
		delete magickColor;
	}
	//==============================================================================================
	DrawableTextUnderColor::DrawableTextUnderColor(System::Drawing::Color color)
	{
		Initialize(gcnew MagickColor(color));
	}
	//==============================================================================================
	DrawableTextUnderColor::DrawableTextUnderColor(MagickColor^ color)
	{
		Initialize(color);
	}
	//==============================================================================================
}