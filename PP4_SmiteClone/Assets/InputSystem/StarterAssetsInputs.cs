using UnityEngine;
#if ENABLE_INPUT_SYSTEM && STARTER_ASSETS_PACKAGES_CHECKED
using UnityEngine.InputSystem;
#endif

namespace StarterAssets
{
	public class StarterAssetsInputs : MonoBehaviour
	{
		[Header("Character Input Values")]
		public Vector2 move;
		public Vector2 look;
		public bool jump;
		public bool sprint;
		public bool abilityOne;
		public bool abilityTwo;
		public bool abilityThree;
		public bool ultimateAbility;

		[Header("Movement Settings")]
		public bool analogMovement;

#if !UNITY_IOS || !UNITY_ANDROID
		[Header("Mouse Cursor Settings")]
		public bool cursorLocked = true;
		public bool cursorInputForLook = true;
#endif

#if ENABLE_INPUT_SYSTEM && STARTER_ASSETS_PACKAGES_CHECKED
		public void OnMove(InputValue value)
		{
			MoveInput(value.Get<Vector2>());
		}

		public void OnLook(InputValue value)
		{
			if(cursorInputForLook)
			{
				LookInput(value.Get<Vector2>());
			}
		}

		public void OnJump(InputValue value)
		{
			JumpInput(value.isPressed);
		}

		public void OnSprint(InputValue value)
		{
			SprintInput(value.isPressed);
		}
		public void OnAbilityOne(InputValue value)
		{
			AbilityOneInput(value.isPressed);
		}

		public void OnAbilityTwo(InputValue value)
		{
			AbilityTwoInput(value.isPressed);
		}

		public void OnAbilityThree(InputValue value)
		{
			AbilityThreeInput(value.isPressed);
		}

		public void OnUltimateAbility(InputValue value)
		{
			UltimateAbilityInput(value.isPressed);
		}

#else
	// old input sys if we do decide to have it (most likely wont)...
#endif


		public void MoveInput(Vector2 newMoveDirection)
		{
			move = newMoveDirection;
		} 

		public void LookInput(Vector2 newLookDirection)
		{
			look = newLookDirection;
		}

		public void JumpInput(bool newJumpState)
		{
			jump = newJumpState;
		}

		public void SprintInput(bool newSprintState)
		{
			sprint = newSprintState;
		}

		public void AbilityOneInput(bool newAbilityOneState)
		{
			abilityOne = newAbilityOneState;
		}

		public void AbilityTwoInput(bool newAbilityTwoState)
		{
			abilityTwo = newAbilityTwoState;
		}

		public void AbilityThreeInput(bool newAbilityThreeState)
		{
			abilityThree = newAbilityThreeState;
		}

		public void UltimateAbilityInput(bool newUltimateAbilityState)
		{
			ultimateAbility = newUltimateAbilityState;
		}


#if !UNITY_IOS || !UNITY_ANDROID

		private void OnApplicationFocus(bool hasFocus)
		{
			SetCursorState(cursorLocked);
		}

		private void SetCursorState(bool newState)
		{
			Cursor.lockState = newState ? CursorLockMode.Locked : CursorLockMode.None;
		}

#endif

	}
	
}