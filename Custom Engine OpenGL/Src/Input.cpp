#include "Input.h"


Input* Input::Instance = NULL;

Input::Input(GLFWwindow* _window) {
	const auto _onKeyPressCallback = [](GLFWwindow*, int _key, int, int _action, int)
	{
		switch (_action)
		{
			case GLFW_PRESS:
				switch (_key)
				{
					case GLFW_KEY_ESCAPE:
						Instance->SetButtonState(Button::QUIT, Button_State::PRESSED);
						break;

					case GLFW_KEY_LEFT_SHIFT:
						Instance->SetButtonState(Button::LSHIFT, Button_State::PRESSED);
						break;

						#pragma region A - Z
					case GLFW_KEY_W:
						Instance->SetButtonState(Button::W, Button_State::PRESSED);
						break;
					case GLFW_KEY_A:
						Instance->SetButtonState(Button::A, Button_State::PRESSED);
						break;
					case GLFW_KEY_S:
						Instance->SetButtonState(Button::S, Button_State::PRESSED);
						break;
					case GLFW_KEY_D:
						Instance->SetButtonState(Button::D, Button_State::PRESSED);
						break;
					case GLFW_KEY_E:
						Instance->SetButtonState(Button::E, Button_State::PRESSED);
						break;
					case GLFW_KEY_Q:
						Instance->SetButtonState(Button::Q, Button_State::PRESSED);
						break;
					case GLFW_KEY_T:
						Instance->SetButtonState(Button::T, Button_State::PRESSED);
						break;
					case GLFW_KEY_V:
						Instance->SetButtonState(Button::V, Button_State::PRESSED);
						break;

						#pragma endregion

						#pragma region Num Pad
					case GLFW_KEY_KP_8:
						Instance->SetButtonState(Button::NumPad8, Button_State::PRESSED);
						break;
					case GLFW_KEY_KP_2:
						Instance->SetButtonState(Button::NumPad2, Button_State::PRESSED);
						break;
					case GLFW_KEY_KP_4:
						Instance->SetButtonState(Button::NumPad4, Button_State::PRESSED);
						break;
					case GLFW_KEY_KP_6:
						Instance->SetButtonState(Button::NumPad6, Button_State::PRESSED);
						break;

						#pragma endregion

						#pragma region Number key
					case GLFW_KEY_1:
						Instance->SetButtonState(Button::K1, Button_State::PRESSED);
						break;
					case GLFW_KEY_2:
						Instance->SetButtonState(Button::K2, Button_State::PRESSED);
						break;
					case GLFW_KEY_3:
						Instance->SetButtonState(Button::K3, Button_State::PRESSED);
						break;
					case GLFW_KEY_4:
						Instance->SetButtonState(Button::K4, Button_State::PRESSED);
						break;
					case GLFW_KEY_5:
						Instance->SetButtonState(Button::K5, Button_State::PRESSED);
						break;
					case GLFW_KEY_6:
						Instance->SetButtonState(Button::K6, Button_State::PRESSED);
						break;
					case GLFW_KEY_7:
						Instance->SetButtonState(Button::K7, Button_State::PRESSED);
						break;

						#pragma endregion

						#pragma region Arrow Keys
					case GLFW_KEY_UP:
						Instance->SetButtonState(Button::UP, Button_State::PRESSED);
						break;
					case GLFW_KEY_DOWN:
						Instance->SetButtonState(Button::DOWN, Button_State::PRESSED);
						break;
					case GLFW_KEY_LEFT:
						Instance->SetButtonState(Button::LEFT, Button_State::PRESSED);
						break;
					case GLFW_KEY_RIGHT:
						Instance->SetButtonState(Button::RIGHT, Button_State::PRESSED);
						break;

						#pragma endregion

				}
				break;

			case GLFW_RELEASE:
				switch (_key)
				{
					case GLFW_KEY_ESCAPE:
						Instance->SetButtonState(Button::QUIT, Button_State::RELEASED);
						break;

					case GLFW_KEY_LEFT_SHIFT:
						Instance->SetButtonState(Button::LSHIFT, Button_State::RELEASED);
						break;

						#pragma region A - Z
					case GLFW_KEY_W:
						Instance->SetButtonState(Button::W, Button_State::RELEASED);
						break;
					case GLFW_KEY_A:
						Instance->SetButtonState(Button::A, Button_State::RELEASED);
						break;
					case GLFW_KEY_S:
						Instance->SetButtonState(Button::S, Button_State::RELEASED);
						break;
					case GLFW_KEY_D:
						Instance->SetButtonState(Button::D, Button_State::RELEASED);
						break;
					case GLFW_KEY_E:
						Instance->SetButtonState(Button::E, Button_State::RELEASED);
						break;
					case GLFW_KEY_Q:
						Instance->SetButtonState(Button::Q, Button_State::RELEASED);
						break;
					case GLFW_KEY_T:
						Instance->SetButtonState(Button::T, Button_State::RELEASED);
						break;
					case GLFW_KEY_V:
						Instance->SetButtonState(Button::V, Button_State::RELEASED);
						break;

						#pragma endregion

						#pragma region Numpad
					case GLFW_KEY_KP_8:
						Instance->SetButtonState(Button::NumPad8, Button_State::RELEASED);
						break;
					case GLFW_KEY_KP_2:
						Instance->SetButtonState(Button::NumPad2, Button_State::RELEASED);
						break;
					case GLFW_KEY_KP_4:
						Instance->SetButtonState(Button::NumPad4, Button_State::RELEASED);
						break;
					case GLFW_KEY_KP_6:
						Instance->SetButtonState(Button::NumPad6, Button_State::RELEASED);
						break;

						#pragma endregion

						#pragma region Number Key
					case GLFW_KEY_1:
						Instance->SetButtonState(Button::K1, Button_State::RELEASED);
						break;
					case GLFW_KEY_2:
						Instance->SetButtonState(Button::K2, Button_State::RELEASED);
						break;
					case GLFW_KEY_3:
						Instance->SetButtonState(Button::K3, Button_State::RELEASED);
						break;
					case GLFW_KEY_4:
						Instance->SetButtonState(Button::K4, Button_State::RELEASED);
						break;
					case GLFW_KEY_5:
						Instance->SetButtonState(Button::K5, Button_State::RELEASED);
						break;
					case GLFW_KEY_6:
						Instance->SetButtonState(Button::K6, Button_State::RELEASED);
						break;
					case GLFW_KEY_7:
						Instance->SetButtonState(Button::K7, Button_State::RELEASED);
						break;

						#pragma endregion

						#pragma region Arror Key
					case GLFW_KEY_UP:
						Instance->SetButtonState(Button::UP, Button_State::RELEASED);
						break;
					case GLFW_KEY_DOWN:
						Instance->SetButtonState(Button::DOWN, Button_State::RELEASED);
						break;
					case GLFW_KEY_LEFT:
						Instance->SetButtonState(Button::LEFT, Button_State::RELEASED);
						break;
					case GLFW_KEY_RIGHT:
						Instance->SetButtonState(Button::RIGHT, Button_State::RELEASED);
						break;

						#pragma endregion

				}
				break;

		}
	};
	glfwSetKeyCallback(_window, _onKeyPressCallback);

	const auto _onCursorMovedCallback = [](GLFWwindow*, double _x, double _y)
	{
		Instance->SetCursorPosition(_x, _y);
	};

	m_CurrentCursorX = 0.0;
	m_CurrentCursorY = 0.0;
	m_PreviousCursorX = 0.0;
	m_PreviousCursorY = 0.0;

	glfwSetCursorPosCallback(_window, _onCursorMovedCallback);
	glfwSetInputMode(_window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);

}

void Input::Setup(GLFWwindow* _window)
{
	Instance = new Input(_window);
}

void Input::Update(GLFWwindow* _window)
{
	// TODO: fix "#error gl.h included before glew.h"
	//Debug::Log(Debug::LogLevel::Info, "Input working!!");

	std::cout << "[Info]: Input is working!!" << std::endl;

	m_PreviousCursorX = m_CurrentCursorX;
	m_PreviousCursorY = m_CurrentCursorY;

	for (auto _button : m_ButtonState)
		if (_button.second == Button_State::PRESSED)
			m_ButtonState[_button.first] = Button_State::DOWN;
		else if (_button.second == Button_State::RELEASED)
			m_ButtonState[_button.first] = Button_State::W;

	glfwPollEvents();

	if (glfwWindowShouldClose(_window))
		Instance->SetButtonState(Button::QUIT, Button_State::PRESSED);
}

bool Input::IsButtonState(Button type, Button_State state) const
{
	if (m_ButtonState.find(type) == m_ButtonState.end())
		if (state == Button_State::W)
			return true;
		else
			return false;

	return m_ButtonState.find(type)->second == state;
}

void Input::SetCursorPosition(double _x, double _y)
{
	if (m_PreviousCursorX == 0.0 && m_PreviousCursorY == 0.0)
	{
		m_PreviousCursorX = _x;
		m_PreviousCursorY = _y;
	}

	m_CurrentCursorX = _x;
	m_CurrentCursorY = _y;
}

std::pair<double, double> Input::CurrentCursorPosition() const { return { m_CurrentCursorX, m_CurrentCursorY }; }
std::pair<double, double> Input::PreviousCursorPosition() const { return { m_PreviousCursorX, m_PreviousCursorY }; }
void Input::SetButtonState(Button type, Button_State state) { m_ButtonState[type] = state; };