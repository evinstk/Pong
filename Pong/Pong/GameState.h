class GameState
{
public:
	virtual void processInput() = 0;
	virtual void update() = 0;
	virtual void display() = 0;
};
