#pragma once

class Asset
{
	public:
	Asset(const char* id);
	~Asset();

	const char* GetID() const;

	private:
	const char* m_ID;
};

