#pragma once



class TrashAnimation : public Object
{
public:
	virtual void Awake() override;
	virtual void Start() override;
	virtual void Update() override;
	virtual void OnDestroy() override;

	void UnLoadSprite();
	void LoadSprite();
	void NextSprite();

	void LoadSpriteAsync();

	bool IsMaxIndex();
	bool IsLoadMaxIndex();
	bool IsUnLoadMaxIndex();

	int NextIndex();
	int NextLoadIndex();
	int NextUnLoadIndex();
	void InitIndex();

public:
	SpriteRenderer* sprite;

public:
	static std::atomic<bool> load_complete;

	std::wstring path;
	std::string key;
	std::string pluskey;
	float totalTime;
	bool isloop;
	bool isReverse;
	float quality;

	bool play_animation = false;

private:
	int index;
	int unloadIndex;
	std::atomic<int> loadIndex;
	int maxIndex;
	float elapsedTime;
};


