#include "Land.h"
#include "DEFINITIONS.h"

namespace Reonid
{
	Land::Land(GameDataRef data) : _data(data)
	{
		sf::Sprite sprite(_data->assets.GetTexture("Land"));
		sf::Sprite sprite2(_data->assets.GetTexture("Land"));

		sprite.setPosition(0, _data->window.getSize().y - sprite.getGlobalBounds().height);
		sprite2.setPosition(sprite.getGlobalBounds().width, _data->window.getSize().y - sprite.getGlobalBounds().height);

		_landsprites.push_back(sprite);
		_landsprites.push_back(sprite2);
	}

	void Land::MoveLand(float dt)
	{
		for (unsigned short int i = 0; i < _landsprites.size(); i++)
		{
			float movement = PIPE_MOVEMENT_SPEED * dt;

			_landsprites.at(i).move(-movement, 0.0f);

			if (_landsprites.at(i).getPosition().x < 0 - _landsprites.at(i).getGlobalBounds().width)
			{
				sf::Vector2f position(_data->window.getSize().x, _landsprites.at(i).getPosition().y);

				_landsprites.at(i).setPosition(position);
			}

		}
	}

	void Land::DrawLand()
	{
		for (unsigned short int i = 0; i < _landsprites.size(); i++)
		{
			_data->window.draw(_landsprites.at(i));
		}
	}

	const std::vector<sf::Sprite> &Land::GetSprites() const
	{
		return _landsprites;
	}
}