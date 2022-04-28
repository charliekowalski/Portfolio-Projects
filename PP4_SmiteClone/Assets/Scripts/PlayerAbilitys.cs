using StarterAssets;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class PlayerAbilitys : MonoBehaviour
{
    [SerializeField] enum Abilitytype
    {
        RANGED_AOE,
        PLAYER_AOE,
    }
    [SerializeField] List<KeyValuePair<Abilitytype,GameObject>> abilities;
    [SerializeField] List<GameObject> abilitiesVisuals;
    private StarterAssetsInputs _input;
    void Start()
    {
        _input = GetComponent<StarterAssetsInputs>();
        abilities.Add(new KeyValuePair<Abilitytype, GameObject>(Abilitytype.RANGED_AOE, abilitiesVisuals[0]));
    }

    void Update()
    {
        CheckButtonPresses();
    }
    void AbilityUi(KeyValuePair<Abilitytype,GameObject> ability)
    {
        bool isRayValid;
        Ray ray = Camera.main.ScreenPointToRay(Mouse.current.position.ReadValue());
        RaycastHit hit;
        if (Physics.Raycast(ray, out hit, 1000f))
        {
            Debug.DrawLine(gameObject.transform.GetChild(0).transform.position, hit.point, Color.red);
            isRayValid = true;
        }
        else
        {
            isRayValid = false;
        }

        if(isRayValid)
        {
            switch(ability.Key)
            {
                case Abilitytype.RANGED_AOE:
                    {
                        if(ability.Value == null)
                        {
                            Instantiate(ability.Value, hit.point, Quaternion.identity);
                        }
                        ability.Value.transform.position = gameObject.transform.position;

                        break;
                    }

                case Abilitytype.PLAYER_AOE:
                    {
                        if (ability.Value == null)
                        {
                            Instantiate(ability.Value, gameObject.transform.position, Quaternion.identity);
                        }
                        ability.Value.transform.position = gameObject.transform.position;

                        break;
                    }
            }
        }
    }

    void Raycast()
    {
        
    }

    void AbilityMechanics()
    {

    }

    void CheckButtonPresses()
    {
        if (_input.abilityOne)
        {
            AbilityUi(abilities[0]);
        }
        else if(_input.abilityTwo)
        {
            AbilityUi(abilities[1]);
        }
        else if(_input.abilityThree)
        {
            AbilityUi(abilities[2]);
        }
        else if(_input.ultimateAbility)
        {
            AbilityUi(abilities[3]);
        }
    }
}
