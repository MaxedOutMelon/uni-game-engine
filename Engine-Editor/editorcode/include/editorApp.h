/** \file engineApp.cpp
*/
#pragma once

#include "include/independent/core/entrypoint.h"
#include "ImGuiLayer.h"
#include "EditorLayer.h"
#include "engine.h"
/**
\class EditorApp
* \brief entry class to run the application
*/
namespace Engine
{
	class EditorApp : public Engine::Application
	{
	public:
		EditorApp();	//!< constructor
		~EditorApp() override; //!< destructor

	private:
		std::shared_ptr<EditorLayer> m_editorLayer;
	};
}