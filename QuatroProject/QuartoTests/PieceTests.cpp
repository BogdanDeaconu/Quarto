#include "stdafx.h"
#include "CppUnitTest.h"

#include "Piece.h"

#include <sstream>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace PieceTests
{
	TEST_CLASS(PieceTests)
	{
	public:

	    TEST_METHOD(Constructor_test)
		{
			Piece piece(Piece::Body::Full, Piece::Color::Dark, Piece::Height::Tall, Piece::Shape::Square);
			Assert::IsTrue(piece.GetBody() == Piece::Body::Full);
			Assert::IsTrue(piece.GetColor() == Piece::Color::Dark);
			Assert::IsTrue(piece.GetHeight() == Piece::Height::Tall);
			Assert::IsTrue(piece.GetShape() == Piece::Shape::Square);
		}
	};
}