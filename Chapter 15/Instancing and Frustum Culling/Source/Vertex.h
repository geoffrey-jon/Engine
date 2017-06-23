#ifndef VERTEX_H
#define VERTEX_H

#include <DirectXMath.h>

struct Vertex
{
	Vertex() : Pos(0.0f, 0.0f, 0.0f), Normal(0.0f, 0.0f, 0.0f), Tex(0.0f, 0.0f) {}
	Vertex(float px, float py, float pz, float nx, float ny, float nz, float tx, float ty)
		: Pos(px, py, pz), Normal(nx, ny, nz), Tex(tx, ty) {}

	DirectX::XMFLOAT3 Pos;
	DirectX::XMFLOAT3 Normal;
	DirectX::XMFLOAT2 Tex;
};

struct InstancedData
{
	DirectX::XMMATRIX World;
	DirectX::XMFLOAT4 Color;
};

#endif // VERTEX_H