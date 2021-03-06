#pragma once

#include "Defines.h"
#include "Methods.h"
#include <SFML/Graphics.hpp>

namespace CommResMeth {

	class __VSTG_API Scene : public sf::IntRect{
	public:
		Scene(Scene* const parent, const sf::IntRect & rect = sf::IntRect(), const sf::View & view = sf::View());
		Scene(sf::RenderWindow* const wnd);
		~Scene();
		int exec();
		void update(const float dt);
		void update();
		void draw();
		void resetViewport();
		void move(const int x, const int y);
		void move(const sf::Vector2i & dpos) { move(dpos.x, dpos.y); }
		void setPosition(const int x, const int y);
		void setPosition(const sf::Vector2i & pos) { setPosition(pos.x, pos.y); }
		void setSize(const int w, const int h);
		void setSize(const sf::Vector2i & size) { setSize(size.x, size.y); }
	public: // static func
		inline static const sf::Vector2f TopLeftCoord2BottomLeftCoord(const sf::Vector2f& vec2) {
			return sf::Vector2f(vec2.x, -vec2.y);
		}
		inline static const sf::Vector2f BottomLeftCoord2TopLeftCoord(const sf::Vector2f& vec2) {
			return sf::Vector2f(vec2.x, -vec2.y);
		}
		inline const sf::Vector2f TopLeftCoord2Window(const sf::Vector2f& vec2) {
			return sf::Vector2f(left + vec2.x, top + vec2.y);
		}
		inline const sf::Vector2f BottomLeftCoord2Window(const sf::Vector2f& vec2) {
			return sf::Vector2f(left + vec2.x, top + height - vec2.y);
		}
		inline const sf::Vector2f Window2TopLeftCoord(const sf::Vector2f& vec2) {
			return sf::Vector2f(vec2.x - left, vec2.y - top);
		}
		inline const sf::Vector2f Window2BottomLeftCoord(const sf::Vector2f& vec2) {
			return sf::Vector2f(vec2.x - left, height - vec2.y + top);
		}
	private:
		virtual int Exec();
		virtual void Update(const float dt);
		virtual void Update();
		virtual void Draw() {};
	protected:
		sf::RenderWindow* wnd;
		Scene *parent;
		std::vector<Scene*> childs;
		sf::View sceneView;
	private:
		bool isCreator;
	};
}
