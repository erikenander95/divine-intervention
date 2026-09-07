from pathlib import Path

content = """# Divine Intervention — Core GDD

## 1. Game Overview

**Title:** Divine Intervention  
**Genre:** God Game / Civilization Simulation / Sandbox Strategy  
**Perspective:** Top-down / God view  
**Visual Style:** Stylized voxel art  
**Core Experience:** Observe, influence, and shape the evolution of human civilization.

### High Concept

**Divine Intervention** is a simulation game where the player takes the role of a God overlooking a procedurally generated world.

Human societies begin at the earliest stages of human civilization and gradually progress through history, eventually reaching the distant future.

The player does not directly control individual humans or civilizations.

Instead, the world largely **plays itself**.

The player's role is to observe the simulation and intervene through divine powers, manipulating events, environments, and individuals to influence how humanity develops.

The central question is:

> **What happens when humanity is left to develop on its own — and what happens when a God starts interfering?**

---

# 2. Core Gameplay Loop

The fundamental gameplay loop is:

**Generate World → Spawn Tribes → Observe → Humanity Develops → Events Occur → Player Intervenes → Civilization Reacts → Continue Through History**

The player should spend much of their time **watching things happen** rather than constantly issuing commands.

For example:

1. Two primitive tribes spawn on opposite sides of a continent.
2. Each tribe begins gathering food and resources.
3. The tribes expand.
4. One tribe discovers fire.
5. The tribes eventually encounter one another.
6. Their personalities and cultural values influence their response.
7. They may trade and cooperate.
8. Alternatively, they may become hostile.
9. A war begins.
10. The player intervenes by causing a drought.
11. One civilization suffers a famine.
12. Its population decreases.
13. The surviving civilization migrates.
14. Centuries later, the two civilizations may have completely different histories because of these events.

The player is essentially **creating history through intervention**.

---

# 3. The World

Each game takes place on a **square procedurally generated world**.

The exact dimensions are currently undecided.

### World Generation

Every run generates a new world.

The generation should not be completely random. It should follow logical geographical rules so that the world feels naturally formed.

For example:

- Mountains form mountain ranges rather than isolated random mountains.
- Rivers originate from elevated terrain and flow toward lower terrain.
- Lakes form in geographical depressions.
- Deserts are more likely to occur in dry regions.
- Forests appear where climate and moisture allow them.
- Coastlines naturally form around bodies of water.
- Different biomes transition logically into one another.

### Potential Terrain

Initial terrain types could include:

- Ocean
- Beach
- Plains
- Forest
- Jungle
- Desert
- Tundra
- Mountains
- Hills
- Rivers
- Lakes

The exact biome list can be expanded later.

---

# 4. Visual Presentation

The world is technically **3D**, but should visually read as a mostly 2D world.

### Camera

The camera uses a high, top-down perspective with an angle carefully chosen so that voxel models appear relatively flat.

The goal is to create the feeling that the player is looking down upon a miniature world.

The player should feel like they are literally **looking down from the heavens**.

### Art Style

All world entities are created using voxel models stored as `.vox` files.

The visual style should be:

- Stylized
- Readable
- Simple
- Charming
- Consistent
- Low-detail enough that large populations can be simulated visually

Individual humans should be visually distinguishable enough to communicate their role and identity without requiring highly detailed models.

---

# 5. Humanity

Humanity is the central simulation of the game.

Humans are **autonomous agents**.

The player does not directly control them.

Each human possesses a collection of randomly generated characteristics that influence their behavior.

### Individual Attributes

Potential attributes include:

| Attribute | Effect |
|---|---|
| Strength | Physical tasks and combat |
| Intelligence | Learning and problem solving |
| Creativity | Innovation and invention |
| Courage | Willingness to take risks |
| Health | Survival and disease resistance |
| Charisma | Influence over others |
| Curiosity | Exploration and discovery |
| Loyalty | Attachment to groups |
| Ambition | Desire for status and power |
| Empathy | Willingness to help others |

These values should not necessarily determine behavior directly.

Instead, they influence the probability of different behaviors.

For example:

> High Curiosity + High Courage → More likely to explore unknown territory.

---

# 6. Personality

Every human also has a **personality**.

Personality determines how individuals respond to situations.

Possible personality traits:

- Aggressive
- Peaceful
- Greedy
- Generous
- Curious
- Cautious
- Ambitious
- Loyal
- Suspicious
- Compassionate
- Selfish
- Brave
- Fearful
- Social
- Introverted

These traits can combine to create emergent behavior.

For example:

**Human A**

- Highly ambitious
- Aggressive
- Charismatic
- Intelligent

may eventually become a military leader.

While:

**Human B**

- Highly empathetic
- Intelligent
- Peaceful
- Curious

might become a scholar, healer, or religious leader.

The important principle is:

> **Humans should not simply follow predetermined scripts. Their behavior should emerge from their attributes, personalities, relationships, circumstances, and culture.**

---

# 7. Tribes

Every new world begins with **at least two independent tribes**.

The tribes begin unaware of one another.

Each tribe has:

- Population
- Territory
- Culture
- Resources
- Technology
- Leadership
- Beliefs
- Relationships
- Collective personality/values

The initial tribes should be sufficiently separated geographically that discovering another tribe becomes an event.

---

# 8. Discovery

One of the major early-game events is **first contact**.

When two previously unknown tribes encounter one another, the outcome is not predetermined.

Their response depends on factors such as:

- Individual personalities
- Tribe culture
- Relative strength
- Available resources
- Territorial pressure
- Previous experiences
- Leadership
- Fear
- Trust
- Diplomacy

Possible outcomes include:

### Cooperation

The tribes establish friendly relations.

They may:

- Trade
- Share knowledge
- Exchange resources
- Intermarry
- Form alliances
- Eventually merge

### Conflict

The tribes become hostile.

They may:

- Raid one another
- Fight over territory
- Compete for resources
- Declare war
- Attempt to destroy the opposing tribe

### Neutrality

The tribes discover one another but largely remain separate.

This could eventually develop into either friendship or conflict.

---

# 9. Civilization Development

Humanity has a **general direction of progression**.

The ultimate trajectory is:

**Primitive Humanity → Organized Society → Civilization → Industrialization → Modern Society → Advanced Civilization → Future**

The player cannot simply prevent humanity from evolving forever.

Instead, the simulation should always be pushing humanity forward.

However, events can cause:

- Delays
- Population loss
- Technological setbacks
- Political collapse
- Wars
- Migration
- Cultural regression
- Civilization collapse

This creates an important distinction:

> **Progress is inevitable, but the path humanity takes to reach the future is not.**

Two civilizations can therefore reach the same technological era while having completely different histories.

---

# 10. Historical Eras

The exact era structure can be designed later, but the core concept is that humanity progresses through distinct technological and societal stages.

For example:

### Era 1 — Primitive

- Small tribes
- Hunting and gathering
- Basic tools
- Fire
- Simple shelters

### Era 2 — Tribal

- Agriculture
- Permanent settlements
- Basic trade
- Larger populations
- Early leadership structures

### Era 3 — Ancient

- Cities
- Writing
- Organized religion
- Governments
- Warfare
- Large-scale construction

### Era 4 — Medieval

- Kingdoms
- Fortifications
- Advanced agriculture
- Organized armies
- Complex political systems

### Era 5 — Industrial

- Factories
- Mass production
- Railways
- Large cities
- Mechanized warfare

### Era 6 — Modern

- Electricity
- Cars
- Aviation
- Computers
- Global communication

### Era 7 — Future

- Advanced automation
- Artificial intelligence
- Advanced energy
- Space travel
- Potentially radically different societies

The exact eras and technologies are deliberately **not locked down yet**.

---

# 11. Events

Events are what make each simulation unpredictable.

Events can occur naturally as a consequence of the world and human behavior.

Examples:

### Natural Events

- Drought
- Flood
- Earthquake
- Volcanic eruption
- Wildfire
- Harsh winter
- Disease outbreak
- Meteor impact

### Human Events

- War
- Revolution
- Assassination
- Migration
- Religious movement
- Invention
- Political collapse
- Economic crisis
- Civil war
- Exploration
- Discovery of another civilization

Events should have **consequences rather than simply being notifications**.

For example:

> Drought → Crop failure → Famine → Population decline → Political instability → Civil war → Migration.

This creates chains of emergent history.

---

# 12. Divine Intervention

The player is not a ruler.

They are a **God**.

This distinction is important.

The player should not manage cities, select workers, or issue conventional strategy-game commands.

Instead, they possess divine abilities that allow them to interfere with the simulation.

Possible categories:

### Creation

- Spawn resources
- Create forests
- Create water
- Alter terrain
- Create animals
- Bless individuals

### Destruction

- Lightning
- Earthquake
- Fire
- Flood
- Meteor
- Disease
- Drought

### Influence

- Inspire an individual
- Increase/decrease population growth
- Influence emotions
- Create visions
- Reveal information
- Encourage exploration
- Encourage peace
- Encourage conflict

### Divine Signs

The player can perform actions that humans interpret as supernatural events.

For example:

> A lightning strike hits beside a tribal leader.

The tribe might interpret this as:

**"The gods have chosen our leader."**

Another tribe might interpret the same event as:

**"The gods demand his death."**

This creates room for **human interpretation of divine actions**, rather than simply having everything behave like a game mechanic.

---

# 13. The God–Human Relationship

A major design pillar is that humans should **react to the player's actions**.

The player should not merely modify numbers.

Humanity should attempt to understand what is happening.

For example:

The player causes rain during a drought.

Humans might conclude:

> "The gods have blessed us."

This could lead to:

- A new religion
- A religious leader
- A ritual
- A temple
- A cultural tradition
- Increased faith

Repeated divine interventions could therefore actually **shape civilization**.

---

# 14. Emergent History

The primary output of the game is the **history created by the simulation**.

Every run should produce a unique historical story.

For example:

> **Year 34:** The Red Valley Tribe discovers fire.  
>
> **Year 81:** A young hunter named Aran discovers the neighboring Stone Tribe.  
>
> **Year 83:** The tribes establish trade.  
>
> **Year 147:** A drought causes famine.  
>
> **Year 152:** The Stone Tribe attacks the Red Valley Tribe.  
>
> **Year 154:** The Red Valley Tribe wins the war.  
>
> **Year 201:** Aran's descendants establish the first city.  
>
> **Year 632:** The civilization invents writing.  
>
> **Year 1,204:** A massive volcanic eruption destroys three cities.  
>
> **Year 1,430:** The civilization enters an industrial revolution.  
>
> **Year 2,104:** Humanity establishes its first settlement on another planet.

The player should feel like they are watching **a history unfold**, rather than completing a conventional series of objectives.

---

# 15. Core Design Pillars

The entire game should be built around a small number of principles.

### 1. The World Lives Without the Player

Humanity should continue doing things even if the player does nothing.

### 2. Every Human Is an Individual

Humans have their own attributes, personalities, relationships, and experiences.

### 3. Emergence Over Scripts

Interesting situations should arise from systems interacting with each other.

### 4. Progress, Not Perfection

Humanity generally advances through history, but individual civilizations can experience devastating setbacks.

### 5. Divine Actions Have Consequences

The player should not simply press a button and receive a reward.

Their actions should alter the simulation.

### 6. Every Run Creates a Story

The player should be able to look back at a civilization and say:

> **"I remember when that happened."**

---

# 16. What Makes Divine Intervention Interesting?

The central fantasy isn't:

> **"I control a civilization."**

It is:

> **"I created a world, and now I'm watching humanity figure it out."**

The player should constantly encounter situations that make them curious:

**"What are they going to do?"**

**"Why did they attack them?"**

**"What happens if I help this tribe?"**

**"What happens if I destroy their city?"**

**"Will they worship me?"**

**"Will they realize I exist?"**

**"What happens if I leave them completely alone?"**

That is the game's core.

---

# 17. Prototype Scope

For the **first playable prototype**, aggressively reduce the scope.

You do not need the whole timeline.

You need to prove that the simulation is fun to watch.

### Prototype

**World**
- Procedurally generated terrain
- A few biomes
- Rivers/water
- Resource locations

**Humans**
- 20–50 humans per tribe
- 2 tribes
- Basic needs
- Personality
- A few attributes

**Simulation**
- Gathering
- Eating
- Reproduction
- Movement
- Settlement
- Territory
- Tribe relationships

**Interaction**
- Player can observe
- Player can trigger a few divine interventions

**Progression**
- Primitive → Tribal → Early Civilization

**Events**
- Resource shortages
- Discovery
- Conflict
- Cooperation
- Death
- Migration

If **that** is entertaining to watch, then the entire historical progression becomes much more compelling to build.

The key architectural idea to keep in mind from the beginning is that **"human → tribe → civilization → era" should be layers of the same simulation**, rather than four completely separate systems. That will make the later evolution into cities, nations, governments, wars, religions, technology, etc. much easier to build on top of the core.
"""

path = Path("/mnt/data/Divine_Intervention_Core_GDD.md")
path.write_text(content, encoding="utf-8")
print(path)
