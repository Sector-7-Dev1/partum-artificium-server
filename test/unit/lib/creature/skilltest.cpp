/*
    Definition for a test case for a Skill.
    Copyright (C) 2010 Alex Brandt

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

*/

#include "../../include/creature/skilltest.h"

CPPUNIT_TEST_SUITE_REGISTRATION(SkillTest);

void SkillTest::setUp()
{
    using namespace Creature;

    this->skillA = new Skill();
    this->skillB = new Skill("foo");
    /** @todo Check the last constructor. */
    this->skillC = new Skill();
}

void SkillTest::tearDown()
{
    delete this->skillA;
    delete this->skillB;
    delete this->skillC;
}

void SkillTest::Skill_Instantiation_PropertiesSet()
{
    using namespace Creature;

    /** @todo Properly test everything. */
    CPPUNIT_ASSERT(this->skillA->GetName() == "Empty Skill");
    CPPUNIT_ASSERT(this->skillB->GetName() == "foo");
    CPPUNIT_ASSERT(this->skillC->GetName() == "Empty Skill");
}