using StarterAssets;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class PlayerAbilitys : MonoBehaviour
{
    private StarterAssetsInputs _input;
    void Start()
    {
        _input = GetComponent<StarterAssetsInputs>();
    }

    void Update()
    {
        Raycast();
    }

    void Raycast()
    {
        Ray ray = Camera.main.ScreenPointToRay(Mouse.current.position.ReadValue());
        RaycastHit hit;
        if (Physics.Raycast(ray, out hit, 1000f))
        {
            AbilityUi(hit.point);
        }
    }
    void AbilityUi(Vector3 UiSpawnLocation)
    {
        CheckButtonPresses();
    }
    void AbilityMechanics()
    {

    }

    void CheckButtonPresses()
    {
        if(_input.abilityOne)
        {
            Debug.Log("AbiltiyOne");
        }
        else if(_input.abilityTwo)
        {
            Debug.Log("AbiltiyTwo");
        }
        else if(_input.abilityThree)
        {
            Debug.Log("AbiltiyThree");
        }
        else if(_input.ultimateAbility)
        {
            Debug.Log("UltimateAbiltiy");
        }
    }

    

    
}
