#pragma once
#include "Sprite.hh"
#include "Scene.hh"

// MenuScene class with the main gameplay mode
class RankingDiffSelect : public Scene {
public:
	explicit RankingDiffSelect();
	~RankingDiffSelect() override;
	void OnEntry(void) override;
	void OnExit(void) override;
	void Update(void) override;
	void Draw(void) override;
	static std::string _diff;
private:
	Sprite m_background;
	Sprite titulo;
};