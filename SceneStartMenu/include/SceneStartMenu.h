#pragma once

#include <Scene.h>
#include <Button.h>
#include <TextManager.h>
#include <Defines.h>

#pragma comment(lib, "CommonResourcesMethods")

namespace DllSceneStartMenu {
	class __declspec(dllexport) SceneStartMenu : public CommResMeth::Scene {
	private:
		sf::Event event;
		std::shared_ptr<sf::Texture> butTexture;
		CommResMeth::Button butStart;
		CommResMeth::Button butOnline;
		CommResMeth::Button butEdit;
		CommResMeth::Button butExit;
		bool isFocus;
		bool isFullscreen;
	public:
		SceneStartMenu(Scene* const parent = nullptr);
		virtual ~SceneStartMenu() = default;
		int Exec() override;
	};
}
