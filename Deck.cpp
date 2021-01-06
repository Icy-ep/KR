#pragma once

#include <random>

#include "Deck.h"

XDeck::XDeck(XCard Cards[DECK_SIZE])
{
	for (size_t i = 0; i < DECK_SIZE; ++i)
	{
		m_Cards[i] = Cards[i];
	}
}

void XDeck::Shuffle()
{
	std::default_random_engine g_RandomEngine(new std::random_device());
	for (size_t i = DECK_SIZE - 1; i > 0; --i)
	{
		XCard Temp;
		size_t j = g_RandomEngine() % (i + 1);
		
		Temp = m_Cards[i];
		m_Cards[i] = m_Cards[j];
		m_Cards[j] = Temp;
	}
}