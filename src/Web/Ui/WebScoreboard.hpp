#pragma once

#include <string>

namespace Web
{
	namespace Ui
	{
		namespace WebScoreboard
		{
			void Init();
			void Show(bool locked, bool postgame);
			void Hide();
			void Tick();
			std::string getScoreboard();
		}
	}
}