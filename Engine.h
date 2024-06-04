#pragma once
class UEngine
{
	public:
		UEngine();
	virtual ~UEngine();


protected:
	void Input();
	void Tick();
	int Render();
};

